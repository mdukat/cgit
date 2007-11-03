unsigned char old_rev_sha1[20];
unsigned char new_rev_sha1[20];

		if (mode1 != 0)
			cgit_tree_link(path1, NULL, NULL, cgit_query_head,
				       sha1_to_hex(old_rev_sha1), path1);
		else
			html_txt(path1);
		if (mode2 != 0)
			cgit_tree_link(path2, NULL, NULL, cgit_query_head,
				       sha1_to_hex(new_rev_sha1), path2);
		else
			html_txt(path2);
void cgit_print_diff(const char *new_rev, const char *old_rev, const char *prefix)
	get_sha1(new_rev, new_rev_sha1);
	type = sha1_object_info(new_rev_sha1, &size);
	commit = lookup_commit_reference(new_rev_sha1);
		cgit_print_error(fmt("Bad commit: %s", sha1_to_hex(new_rev_sha1)));
		get_sha1(old_rev, old_rev_sha1);
		hashcpy(old_rev_sha1, commit->parents->item->object.sha1);
		hashclr(old_rev_sha1);
	if (!is_null_sha1(old_rev_sha1)) {
		type = sha1_object_info(old_rev_sha1, &size);
			cgit_print_error(fmt("Bad object name: %s", sha1_to_hex(old_rev_sha1)));
		commit2 = lookup_commit_reference(old_rev_sha1);
			cgit_print_error(fmt("Bad commit: %s", sha1_to_hex(old_rev_sha1)));
	cgit_diff_tree(old_rev_sha1, new_rev_sha1, filepair_cb, prefix);