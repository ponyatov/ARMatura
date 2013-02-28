STEX='blink/blink.tex'
TTEX='blink/new_blink.tex'

import os,sys,time,re

F=open(STEX) ; S=F.read() ; F.close()
#os.system('cp %s %s.bak'%(TEX,TEX))

#for i in re.findall(r'(\\includegraphics\[width=.+\]{(.+)})',S):
    #J=i[1]; print J
    #print i

S=re.sub(r'({)(.+?)(\w+\.jpg)(})',r'\1blink/\3\4',S)

F=open(TTEX,'w')
F.write(S)
F.close()

print '.'
