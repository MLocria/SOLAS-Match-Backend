<p>
    {{#USER_HAS_NAME}}
        {{USERNAME}},
    {{/USER_HAS_NAME}}
    {{#NO_USER_NAME}}
        Hello,
    {{/NO_USER_NAME}}
</p>

<p>
A task you are following on {{SITE_NAME}} has passed its deadline. The task<br />
<a href="{{TASK_VIEW}}">{{TASK_TITLE}}</a> has passed its deadline.
</p>

<p>
From,
</p>
<p>
The {{SITE_NAME}} Team
</p>


{{>FOOTER}}
