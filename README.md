# IR-Proximity-Sensor
Tunable IR based proximity sensor with a digital output

<ul>
<li>Autodesk Eagle .brd and .sch files included with all non-standard libs</li>
<li>Sample Arduino code also for tuning and testing included</li>
<li>Potentiometer used to adjust the range</li>
<li>Detection range of about 9cm (3.5 in)</li>
</ul>
<p><strong>Important Notes:</strong></p>
<ul class="remarkup-list">
<li class="remarkup-list-item">The 220 &Omega; resistor is a pull-up in parallel with the LED. The LED needs to be one with an internal resistance (Standard RED 5mm LED with internal resistance is recommended)</li>
<li class="remarkup-list-item">The board has a normal HIGH and triggered LOW. The LED will be ON when the sensor hasn't been triggered and will turn OFF when it has.</li>
</ul>
<br>
<br>
<b> BOM: </b>
<table style="width: 340px;">
<tbody>
<tr>
<td style="width: 224px;">
<p><strong>Part</strong></p>
</td>
<td style="width: 90px;">
<p><strong>Part no.</strong></p>
</td>
<td style="width: 25px;">
<p><strong>Quantity</strong></p>
</td>
</tr>
<tr>
<td style="width: 224px;">
<p>IR Reflective Sensor</p>
</td>
<td style="width: 90px;">
<p>TCRT 5000</p>
</td>
<td style="width: 25px;">
<p>1</p>
</td>
</tr>
<tr>
<td style="width: 224px;">
<p>Red LED (internal resistor)</p>
</td>
<td style="width: 90px;">&nbsp;</td>
<td style="width: 25px;">
<p>1</p>
</td>
</tr>
<tr>
<td style="width: 224px;">
<p>100 ohm Resistor</p>
</td>
<td style="width: 90px;">&nbsp;</td>
<td style="width: 25px;">
<p>1</p>
</td>
</tr>
<tr>
<td style="width: 224px;">
<p>220 ohm Resistor</p>
</td>
<td style="width: 90px;">&nbsp;</td>
<td style="width: 25px;">
<p>1</p>
</td>
</tr>
<tr>
<td style="width: 224px;">
<p>4.7k ohm Resistor</p>
</td>
<td style="width: 90px;">&nbsp;</td>
<td style="width: 25px;">
<p>1</p>
</td>
</tr>
<tr>
<td style="width: 224px;">
<p>10k Multi-turn POT</p>
</td>
<td style="width: 90px;">&nbsp;</td>
<td style="width: 25px;">
<p>1</p>
</td>
</tr>
<tr>
<td style="width: 224px;">
<p>0.1uF Ceramic Capacitor</p>
</td>
<td style="width: 90px;">&nbsp;</td>
<td style="width: 25px;">
<p>2</p>
</td>
</tr>
<tr>
<td style="width: 224px;">
<p>TL081 op-amp</p>
</td>
<td style="width: 90px;">
<p>TL081</p>
</td>
<td style="width: 25px;">
<p>1</p>
</td>
</tr>
<tr>
<td style="width: 224px;">
<p>LM311N op-amp</p>
</td>
<td style="width: 90px;">
<p>LM311N</p>
</td>
<td style="width: 25px;">
<p>1</p>
</td>
</tr>
<tr>
<td style="width: 224px;">
<p>Break Away Headers</p>
</td>
<td style="width: 90px;">&nbsp;</td>
<td style="width: 25px;">
<p>6</p>
</td>
</tr>
</tbody>
</table>
<br>
<br>
<b> Schematic </b>
<p><img src="https://lh3.googleusercontent.com/Zwb_SkjRGWa19hBm1e4YVG9eZ23glGA6NjS-Ou1clzG_oZjOFmPfgkMU8Cp334mmLKKAjStN9HKiv2pWfvJR2-hTuLmWyR8rWoQOM7ayoLPobvB7CmQ-dfeZYlmZo9L1Wi9_KP8W2_uJr8D0wNGXsQQSpvhhvg8mz8kDS5CAi4ykdRVQheV74HC4zo0v5zkerF4vZkbousf5RiH_KLvuS8Llrjs1dhtjkYM-MijDMBwaktunjV010px6oPd78s-cyNc4TQBTKt9N7yJLx2kM9ZHCTrbilLN_2Hra7wP7xL3pwj1ZeHxO5uo4zHPfYah_iJ3MJCyRHsIzbPK4ZB9vVi52PL1uQwYg5UyD7BXRonCWu0UCDisdlhRqaIUkuDGP3NU6K4zZXXNWVuxuSWk6KN1QmPfbB7H_pQ6c6z2nli-gSeCfMHAZPdB5eizKbrXndTJUzZG39JknZ1oxK8gkzMEgsBV8jNmg_fiKLtT1w2CQ6GuRNpTRqC7p0bxaDu1cHEFVb5VeQJyPk7cohww0hd_GRQ7aNg3djUZwAVCC1HDRR9v4lE6sAoWaw8-9kwiJ0NFAgWW4Cx5o6IzdE_UPnTP-PvRc4I_q4wulW1vOqoA6WQu6DR8ch-eUSng8WL1XrTcQPgox8_Rj7cVs4KgAeXGLxpkLgvk=w1490-h647-no" alt="Schematic" /></p>
<br>
<br>
<b> Prototype Board </b>
<p><img src="https://lh3.googleusercontent.com/kTpFRPUDnphNOB8mzRktVxj2fd1Z1enw6VV37BDYr8yZNx7mzx64uz2aNy46-VuJaqH3HURf8lxvSOkNEQAW3xa3IfWfSficCTYc8uv8ruH3sVzSQvmqEslbY4e8KDF2kafx9vMA52eU8H9B_E8UzmH7RvL8j4xx75Gxo7oXYg_HQhL3QQNqbtrEVO-aHyX6ESBVG2Bjnz7KacMQFp66Cw55_cTvJ9nVox-2nq9aUe_cJ8bTiRQqDRZezuzfHB7U50gxdkzGyhmLvicRg9M374ojdLfmsQ1c-ZKbNgejqSYuoDY6_wY3BWmg10znmKuQIFnIk0IMFHwgi0TkyWdmpZWPlGHhTE6fr4CrFxA8gqkoOBRmKla-tquY0NGht-U7thHflTx-vLbYO2h6S11igCqIX6LQyHp9PCYWhCBuqsB9ks0YG05kNIXTz099UucUl9oWCPI9f_CuCVW8SvGMu01NZCPmGxaVSpke306Gpy0drfCVcW7b_RLInOz-UabUgGYCsqIwr7Fk29shwmixyMytEw-m-kULS3ObSw5QFu2wzJCdUDeBTn7vvhgmxBHejnpr8H4cTJHBXZX3Wu2E3HsorZrp23u_xlHs=s975-no" alt="Prototype Board" /></p>
<br>
<br>
<b> BreadBoard based testing </b>
<p><img src="https://lh3.googleusercontent.com/lZFc2UPbqhcqAt3RwgX3AW0O8MCwYp24WpgpFAgGRkzEs63oLN_O5I6uY7BqXlp5ccr6zbxrTBur_A4a9BfHYHFJ-eMX80Uq-vQLOnQZWPFplEDL5UTadezfYQz4jngmI0ja3Sl4ZXvIe-oJbKJdkzD74t94Wq-Z7XkF4RK7_ZHUq726HeyEKVpNe6yNCXHnhGCm5hyFS0vgbK97_9y8TE3pNlP8FV8stxOz0oW2y5Kk-GgspIvprupM9-dy0Iqa6hvOpqqDH3szOVw1xJvg2rtj4GNLT_idXV6aJPf_JlhfGaBe59AvyyAIQbXgGbx-GCkHw8xUfM9E582kNldTywGK8VcKoLVRjym-5kvvVNEXYh6T0L-YCU1gIQa__XAN0VfRBG1OxSseXS5SQ1qh7TK4eHkrFFqULrI9pZsqjVnloofwgmFzfZOCgJ2rG_UgMuRNdp-mmDblk0jzvopbeeWAUGOpGT_sG86Kl_HHu77V6ygBvXohYV3Db65fk-5A2YFPS3j7RecJPRbVI9ycBbu3OVnRGRC6LKfSYCa_c3i5F3N2CT2pJOLdCTJEkN2LY6gVUm93Q_0MYBBVhm60YS1TAfGttX3ZM1U_=s1300-w1300-h975-no" alt="Prototype Board" /></p>
<br>
<br>

OSH Park Project Link: <a href="https://oshpark.com/shared_projects/O8bRqG8g"><img src="https://oshpark.com/assets/badge-5b7ec47045b78aef6eb9d83b3bac6b1920de805e9a0c227658eac6e19a045b9c.png" alt="Order from OSH Park"></img></a>
