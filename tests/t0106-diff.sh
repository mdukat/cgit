run_test 'find diff header' 'grep "a/file-5 b/file-5" trash/tmp'
run_test 'find blob link' 'grep "<a href=./foo/tree/file-5?id=" trash/tmp'
run_test 'find added file' 'grep "new file mode 100644" trash/tmp'
	grep "<div class=.hunk.>@@ -0,0 +1 @@</div>" trash/tmp
	grep "<div class=.add.>+5</div>" trash/tmp