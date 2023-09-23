# create a manifest that kills a process named killmenow.

exec { 'kill_killmenow':
	command => 'pkill killmenow',
	refreshonly => true,
	onlyif => 'pgrep killmenow',
	subscribe => File['killmenow'],
}
