.md = Markdown

So, this file is not necessary.
But I'm adding this file just to show you how git works.

GitHub is a one website.
Git, on the other hand, is a tool. More like a framework.
It is used to keep track of changes to a directory (also called repository, or repo).

The idea is, we make changes to some code, we upload those changes to a central location.

That central location is a free service provided by Microsoft, and it's called GitHub.
There are other websites like GitHub (like GitLab, can't think of any other free ones, but you can even host your own Git server with something like Gitea or Gogs etc.)

The point is, we use git to "push" or "pull" changes from remote origins (like GitHub is an origin).

So I created this new project. It contains some files, assume those files contains some code. Anything.
Now we need a remote origin. So we go and create a project on GitHub.

If you check "add readme", "add gitignore" etc. etc. then GitHub will put files in the directory before creating the repo.
That means, any changes you want to make will have to be made ON TOP OF the files that GitHub already placed in the repo.
You will not be able to push your own project to the repo (because remote origin / repo already contains files).
To ensure you have an empty repo to start with, do not check any of those boxes.

I'm going to add one more file.
And this file (README.md) has changed too.
Next we will be creating another commit, with these new changes.

Ok I make more changes. Add them. Commit them and then push commits to github.