## git workflow; branching rules for this repository
### 'main' branch
- sacred
- only changed via pull requests (i.e. any changes to the files in the repository happen in a seperate branch)
- make sure pull-requests have a proper title
- (if possible) no commits to main branch in order to protocol the project in an overseeable way (because having to read a million "update readme.md" in the network graph is annoying me)

### other branches
- semi-sacred, errors are allowed and will be caught when committing to 'main'
- any file change happens here first, will receive an additional review before the actual file gets changed (obviously)
- try to keep commit frequency as low as possible, but as high as needed in order to make any changes understandable at a later point in time

### sub-branching
- i don't really see the necessity for sub-branching right now, but if needed treat the branch you're starting from like 'main'
- then apply all other rules

## thesis workflow
- each "chapter" (section) of the thesis will receive a unique branch
- these will merge with main in a quasi-periodic manner (i.e. every one or two days, based on my own judgement)
