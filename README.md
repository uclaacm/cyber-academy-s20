Each challenge should correspond to a directory at the root of the repository. Make sure to push both source and compiled Linux executable. Also check that the executable runs on the SEASnet servers.

Regarding `challenge.toml`, follow this [example](encompress/challenge.toml). Some things to keep in mind:
* Aim for `value` to range between 10 and 100.
* If you're presenting the next week, set `enabled` to true; otherwise, false.
* Your first tag should signify which workshop the challenge comes from. For example, "assembly" for week 2 and "dynamic" for week 3.
* `files` should contain relative paths, `description` should link by filename.
