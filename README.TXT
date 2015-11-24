The two programs included in this archive are designed to facilitate the
splitting and rejoining of long files.  They were written one night while
I was very irritated about not having found a way to split files on a Unix
workstation to put onto floppy to take to my home computer.  While
undoubtably not the most efficient methods are used, they do work.  The
programs should be able to compile under both unix and OS/2, and will
also probably do so for a variety of other platforms.  One restriction is
that DSPLIT must be run on a system that supports long file names.  This is
due to the fact that it generates files with extensions of .XX for which
piece it is.

How to use:
DSPLIT:
  Run DSPLIT from the command line with no parameters.  You will be asked
  for the file that you wish to split, and for the size of the pieces you
  wish to create.

DJOIN:
  Run DJOIN from the command line with no paramters.  You will be asked for
  the number of pieces to put together, and one by one the filenames of the
  pieces.  This program CAN be used on a FAT drive.

Notes:
  I realize that the interfaces provided for these programs are very painful
to use.  Future releases will definately improve this interface.  Also in
the plans are PM versions of both the splitting and joining programs.  The
simple text mode versions will always be included, since the goal is to
have these be able to compile on multiple platforms, but having a PM version
for OS/2 would be nice.

PLEASE NOTE:  This software is provided as is, and without any warranty.  The
author is not responsible for any loss of data or any other problems that may
occur due to the use of this program.

This program is distributed under the GNU software license.  A copy of the
GNU license has been included in the file COPYING.

How to contact the author:
  email:  schrock@cps.msu.edu
  snail mail:
    Gary Schrock
    354 Abbot Hall
    East Lansing, MI 48825-1104

If at all possible, I would prefer that you contact me using email.  Your
chances of getting a reply are significantly higher this way.  Please
feel free to mail me any suggestions, comments, bug reports, etc.
