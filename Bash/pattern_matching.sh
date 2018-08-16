BLAH="barbarbarbarbar"
echo ${BLAH##ba}
echo ${BLAH#ba}
echo ${BLAH##*ba}
echo ${BLAH#*ba}
echo ${BLAH##ba*}
echo ${BLAH#ba*}
echo ${BLAH%%*ba}
echo ${BLAH%*ba}
echo ${BLAH%%ba*}
echo ${BLAH%ba*}
