<div style="font-family: courier; font-size: 3em">categorization</div>
<hr><br>

<style>
    td{
        color:white; 
        font-family: courier;
    }

    td.descriptor{
        text-align: left;
        vertical-align: top;
        padding-top: 2em;
        padding-left: 2em;
    }

    .problems{
        color:rgba(255,130,130,1);
        text-align: center;
        vertical-align: top;
    }
    .problem{
        margin-top: 2em;
        margin-bottom: 50px;
        padding: 50px;
    }

    .examples{
        color:rgba(255,130,130,.5);
        text-align: right;
        vertical-align: top;
    }
    .example{
        margin-top: 2em;
        margin-bottom: 50px;
        padding: 50px;
    }
</style>

<table>
    <tr>
        <td style="width:20vw; font-size: 1.5em">by complexity/occurence</td>
        <td style="width:28vw; font-size: 1.5em; text-align:center">shorthand</td>
        <td style="width:28vw; font-size: 1.5em; text-align:right">example or description</td>
    </tr>
    <tr>
        <td class="descriptor">simple/common</td>
        <td class="problems">
            <div class="problem">additional characters (errors in dimension 0, which is in a word)</div>
            <div class="problem">confusing word seperation (errors in dimension 1, which is in a line)</div>
            <div class="problem">vertical seperation of strings (errors in dimension 2, which is in multiple lines (sentences))</div>
            <div class="problem">seperation of strings in the third dimension (multiple files)</div>
        </td>
        <td class="examples">
            <div class="example">$not\translated$</div>
            <div class="example">[this wurde nicht translated]</div>
            <div class="example">each line of a document could be regular text or e.g. \hypersetup{urlcolor=blau}</div>
            <div class="example">multi-file TeX support</div>
        </td>
    </tr>
    <tr>
        <td class="descriptor">advanced/uncommon</td>
        <td class="problems">
            <div class="problem" id="comments">comments</div>
            <div class="problem" id="bibtex">bibtex</div>
            <div class="problem" id="tikz">tikz</div>
            <div class="problem" id="glossaries">glossaries</div>
            <div class="problem" id="theoremdefs">theorem and defs</div>
        </td>
        <td class="examples">
            <div class="example" id="comments">%comment vs %\comment</div>
            <div class="example" id="bibtex">[this wurde nicht translated]</div>
            <div class="example" id="tikz">each line of a document could be regular text or e.g. \hypersetup{urlcolor=blau}</div>
            <div class="example" id="glossaries">a</div>
            <div class="example" id="theoremdefs">a</div>
        </td>
    </tr>
    <tr>
        <td class="descriptor">special/rare</td>
        <td class="problems">
            <div class="problem">additional characters</div>
            <div class="problem">missing seperators</div>
            <div class="problem">horizontal seperation of strings</div>
        </td>
        <td class="examples">
            <div class="example">$not\translated$</div>
            <div class="example">[this wurde nicht translated]</div>
            <div class="example">each line of a document could be regular text or e.g. \hypersetup{urlcolor=blau}</div>
        </td>
    </tr>
    <tr>
        <td class="descriptor">uncategorized/always</td>
        <td class="problems">
            <div class="problem">additional characters</div>
            <div class="problem">missing seperators</div>
            <div class="problem">horizontal seperation of strings</div>
        </td>
        <td class="examples">
            <div class="example">$not\translated$</div>
            <div class="example">[this wurde nicht translated]</div>
            <div class="example">each line of a document could be regular text or e.g. \hypersetup{urlcolor=blau}</div>
        </td>
    </tr>
</table>

<!--occurence related to average in document usage-->
<!--uncategorized: could always happen, as these problems are non-TeX specific-->