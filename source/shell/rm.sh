#########################################################################
# File Name: rm.sh
# Author: ma6174
# mail: ma6174@163.com
# Created Time: 2016年07月13日 星期三 20时59分08秒
#########################################################################
#!/bin/bash
ls -l|awk '$1~/x/{print $NF}'|xargs rm
