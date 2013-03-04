import os,sys,time,re

##for i in range(1,10):
##    print 'rename %i.jpg 0%i.jpg'%(i,i)

for i in sorted(os.listdir('.')):
    if i.split('.')[-1]=='jpg':
        print '\\bigskip\n\\includegraphics[width=150mm]{keil/%s}\n'%i

