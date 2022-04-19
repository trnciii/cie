for dir in $(cat dirs); do
	tmp=${dir}"_"

	# mkdir $tmp
	# cp ${dir}/README.md $tmp
	# cp -r ${dir}/docs $tmp

	mv $tmp $dir
done