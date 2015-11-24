/* File joining utility */
   Copywrite 1993 Gary Schrock
   Permission granted to use, modify, and distribute the source and executables
   as provisioned by the GNU software license.

   Last revision: 14 July, 1993
*/
#include <stdio.h>

void
main() {
  FILE *infile,*outfile;
  int filecount;
  unsigned char in_char;
  char filename[255],outfilename[255];
  int loop;

  printf("Number of files: ");
  scanf("%d",&filecount);
  printf("Name of joined file? ");
  scanf("%s",&outfilename);

  outfile=fopen(outfilename,"wb");
  for (loop=0;loop<filecount;loop++) {
    printf("File piece: ");
    scanf("%s",&filename);
    infile=fopen(filename,"rb");
    while(fread(&in_char,sizeof(unsigned char),1,infile)>0)
      fwrite(&in_char,sizeof(unsigned char),1,outfile);
    fclose(infile);
  }
  fclose(outfile);
}
