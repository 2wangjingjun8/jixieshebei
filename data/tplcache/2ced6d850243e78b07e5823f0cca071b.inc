<div class="col-lg-2 col-md-2 col-xs-6 list">
                    <h4 class='font-size-16 m-t-0'>
                        <a href="{dede:field name='typeurl'/}" target='_self'  title="{dede:field name='typename'/}">{dede:field name='typename'/}</a>
                    </h4>
                    <ul class='ulstyle m-b-0'>
                        {dede:channel type='son' noself='yes' }
                        <li><a href="[field:typelink/]"  title="[field:typename/]" target='_self'>[field:typename/]</a></li>
                        {/dede:channel}

                    </ul>
                </div>