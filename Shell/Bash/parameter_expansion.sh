#!/bin/sh

unset foo
echo ${foo:-bar}
foo="foo is set"
echo ${foo:-bar}

foo=/usr/bin/sh/dinesh_sh
echo ${foo#*/}
echo ${foo##*/}

foo=/usr/bin/sh/dinesh_sh
echo ${foo%*/}
echo ${foo%%*/}

bar=/usr/local-3/local-2/etc/local-1/networks
echo ${bar#local*}
echo ${bar##local*}


bar=/usr/local-3/local-2/etc/local-1/networks
echo ${bar%local*}
echo ${bar%%local*}

exit 0
