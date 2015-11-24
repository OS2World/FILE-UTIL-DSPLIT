/* File splitting utility */
   Copywrite 1993 Gary Schrock
   Permission granted to use, modify, and distribute the source and executables
   as provisioned by the GNU software license.

   Last revision: 14 July 1993
*/
#include <stdio.h>

void
main() {
  unsigned int split_size,count;
  char filename[255],outfilename[255];
  int filenamelength;
  unsigned char in_word;
  FILE *outfile,*infile;
  char filecount;

  printf("File to split? ");
  scanf("%s",filename);
  printf("Size of pieces to create? ");
  scanf("%ld",&split_size);

  infile=fopen(filename,"rb");
  strcpy(outfilename,filename);
  filenamelength=strlen(outfilename);
  filecount=0;
  outfilename[filenamelength]='.';
  outfilename[filenamelength+1]=filecount+'0';
  outfilename[filenamelength+2]='\0';
  outfile=fopen(outfilename,"wb");
  count=0;
  while(fread(&in_word,sizeof(unsigned char),1,infile)>0) {
    fwrite(&in_word,sizeof(unsigned char),1,outfile);
    count++;
    if (count==split_size) {
      fclose(outfile);
      filecount++;
      strcpy(outfilename,filename);
      filenamelength=strlen(outfilename);
      if (filecount<10) {
        outfilename[filenamelength]='.';
        outfilename[filenamelength+1]=filecount+'0';
        outfilename[filenamelength+2]='\0';
      } else {
        outfilename[filenamelength]='.';
        outfilename[filenamelength+1]=filecount/10+'0';
        outfilename[filenamelength+2]=filecount%10+'0';
        outfilename[filenamelength+3]='\0';
      }
      outfile=fopen(outfilename,"wb");
      count=0;
    }
  }
  fclose(infile);
  fclose(outfile);
}

