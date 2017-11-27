# ## IPython Notebook for [Bommarito Consulting](http://bommaritollc.com/) Blog Post
# ### **Link**: [Fuzzy sentence matching in Python](http://bommaritollc.com/2014/06/fuzzy-match-sentences-in-python): http://bommaritollc.com/2014/06/fuzzy-match-sentences-in-python
# **Author**: [Michael J. Bommarito II](https://www.linkedin.com/in/bommarito/)

# Imports
import nltk
#nltk.download()
import nltk.corpus
import nltk.tokenize.punkt
import string

# Get default English stopwords and extend with punctuation
stopwords = nltk.corpus.stopwords.words('english')
stopwords.extend(string.punctuation)
stopwords.append('')

# Create tokenizer
tokenizer = nltk.tokenize.punkt.PunktWordTokenizer()

def is_ci_token_stopword_match(a, b):
    """Check if a and b are matches."""
    tokens_a = [token.lower().strip(string.punctuation) for token in tokenizer.tokenize(a) \
                    if token.lower().strip(string.punctuation) not in stopwords]
    tokens_b = [token.lower().strip(string.punctuation) for token in tokenizer.tokenize(b) \
                    if token.lower().strip(string.punctuation) not in stopwords]

    return (tokens_a == tokens_b)
