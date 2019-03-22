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
<p><img src="https://lh3.googleusercontent.com/0rEo42JsqBMX4i5CigN8OvYBaxx5dsRYYDMnX1uTcD22PN08FKVuyTBNpEy_oknnQzwIZidNlnQ1NqyXpSCTdJ3Yc7yMj9nV0CwMqYCn1Y37n9prgbd_VP30CpveG846WebOn05ruZJkqoyn7Io76icUhoIbFO-WkYrozjpmDnvjBJwfnvFIMLWmPCauvjJbusOY46q7CD34M_5QoOR-7vShK127ngZFSnr7Yto1MeYrfCx8_6fOxFPuuZ15FAzN4wERM9teJoXZHAOxNfak_gZOQOBK8dWhkvii_DH2f2EskVXKtJZ9ZgSfFQXSf08LXXKy4TvbsgkBwzyXw8cqRTdakuJgdF_baDZ8Q5t-BE0gPfbSQp5TE9V_HTeBWWXdEVyipdkjA4M70wxT3FawJYXsmBqZH5STEED17UpE4MzehyAhsl5hPET6rA1h1p8I_ZFjhPRt_izsRZeydethjfvtPhaUZ5HKQ4oLq3zCXBh5MlfN0OQvyviE_WxCOSMHc-vApzJEzd6BIQ9O0oSbsBeetTcwmIA7EVQi-KiPVa_SPdu4Tff19pQBjFatvUw3d7t3N_YO-9Ut_cAEwXR7hyJ7ky0-4m_Ddbu254BiYPaNd0yHQcE5n30mUblk2d33utZo1z9QPjqelRpJFrX84BtiP08Tj2g=s950-k-rw-no" alt="Prototype Board"/></p>
<br>
<br>
<b> BreadBoard based testing </b>
<p><img src="https://lh3.googleusercontent.com/_PK_YfDtTmtSu-Pv8T9GU2U2X7QsBDAqKJJoFI226fZ_En5JkSXOvPqi656KTcvmOqG-a9L18dkB9vCc3M0Ez1xJdu9bohAPe9buhuXkDiZs5_0sa19lq1P1dwnJzWkfgA5WykhxyuTl5pDsa0Oe4-kraegiwzo9iQ5K5rcSlC880aebVxppS8w7r6jpICVVGc7lOHR6cBDABKO_c_LYh_0KAZS2YQr6e_IoBqWvw_4et7IfHaC24yC1X4wkxKeunu3kHXvMl_m9ZoCAqADtg9T4Bhf4BA4wxXMD9MUm3TttbQj9S2ny2pviqVpGDUiYb5LkpDpzLILXnNinxx4LuLzbnAdh9zZPo15_Rj1qscziOB9BkgC1lKNJfLYSKXydiiGHwgJbP3cFU2iB90fF9Q03kK3--vtuJNqeh9YOtfGtUVwqi7eAIWXbzq8PrdwuFCSb7sFO8ojuwFne9Uy8Qb-QCmOUTKcCabooIVKLoyP2H1BjeyaA4vVbse8ya6-CUD9gbZ-VdcX2P-Hc_lI-Wq9BweO9ELE28lRADvZaJHQa0YMsg8WoOUfX3m2lou2-xy7fz_0yHGj5U7p-lbmS1VCLaPzZDTDDewpid2PaX6_PSODWA71dV0LiHjlix2hpo5ixqFaxLckNupaN-0IFHaq1-KHK8MY=w1300-h975-no" alt="Prototype Board"/></p>
<br>
<br>

OSH Park Project Link: <a href="https://oshpark.com/shared_projects/O8bRqG8g"><img src="https://oshpark.com/assets/badge-5b7ec47045b78aef6eb9d83b3bac6b1920de805e9a0c227658eac6e19a045b9c.png" alt="Order from OSH Park"></img></a>
