#!/usr/bin/python
import sys
import getopt
import os

def rename_to_pkg(srcname):
    root, ext = os.path.splitext(srcname)
    dstname = ".".join([root, "pkg"])
    print "renaming %s to %s" % (srcname, dstname)
    os.rename(srcname, dstname)

class Usage(Exception):
    def __init__(self, msg):
        self.msg = msg

def main(argv=None):
    if argv is None:
        argv = sys.argv
    try:
        rename_to_pkg(argv[1])
   
    except Usage, err:
        print >>sys.stderr, err.msg
        print >>sys.stderr, "for help use --help"
        return 2

if __name__ == "__main__":
    sys.exit(main())

