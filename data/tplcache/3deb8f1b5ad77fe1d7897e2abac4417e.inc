<li class="nav-item dropdown m-l-0">
                            <a href="{dede:field name='typeurl'/}" title="{dede:field name='typename'/}" data-title="{dede:field name='typename'/}" class="nav-link dropdown-toggle " data-toggle="dropdown" data-hover="dropdown" target='_self' >{dede:field name='typename'/}</a>
                            <div class="dropdown-menu dropdown-menu-right secondmenu">
                                <a href="{dede:field name='typeurl'/}"  title="全部" class='dropdown-item nav-parent hidden-lg-up ' target='_self'>全部</a>
                                {dede:channel type='son' noself='yes' }
                                <a href="[field:typelink/]" target='_self' title="[field:typename/]" class='dropdown-item  navlist-2'>[field:typename/]</a>  
                                {/dede:channel}

                            </div>
                        </li>