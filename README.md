# IR-Proximity-Sensor
Tunable IR based proximity sensor with a digital output

<ul>
<li>Autodesk Eagle .brd and .sch files included with all non-standard libs</li>
<li>Sample Arduino Code also included</li>
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
<p><img src="https://lh3.googleusercontent.com/ZWuQM-ZnXQBVpndc9gSWXAkT_E2P4J-mSgAH8Gjh0sjfXBKrTjkQMZr0qhzlW9H6b-V9u1QtWIu-sbjv6lUHd-rlyakOhSbwMYUZq5_3i_0pWispXmWDmjGLVCcSAnOONumfEpwsuR7yIxkyUTWKbXY8VwLgNi5gbDu9ImhRsy1JZWH3uwdNp_Od2dPWwtMUTE3YwHQugKYVBOEmfr2ROHFjhQ_1SZeFRXhiIE13qLf1P4ihyrDfI6TzEq90lsXUcdgVtd01v3VhkH7D_k-PUvJPLfzQ8lYrhsXWrr5u9_RerVY2d3G8k4ipk68nwqlfrxoBtSY8-evvUdsFAjFaBSu6a3yqLB5Ca4s1c3bRrIrI8redNZgbVSM_rn4dLYeCSEL2qhqvafQ0Axe41PzXrYWniqN_s1w7LrUU2UhItRMSGYyZsRTlSj7crAOuiEBsqoH77Sc8mDzvLsrqkToeBlLr0AFTAhJaieFB9OgN-9BjyXCq7Ce-D9nAmNS5WEXziwk0x8h-c4JZ2zo4NBC0FPDGHaHlUofZlIzITJXA9ASU6kE1SJM3cvMKHvTeOJbBkEVXEB2gqWHqa1rLw_ny7AmlxgZV7usudVj2X-rDoxR8rWpLdFdnT5hLOBq_mavGoAzcv6ntQfv_IYcws0m_Ho97Uir2Ju8=s975-no" alt="Prototype Board"/></p>
<br>
<br>
<b> BreadBoard based testing </b>
<p><img src="https://lh3.googleusercontent.com/q7XzcLLpgO9VKfrgnrV-51i594hPHZzslUMr52DuKcA7_Y91JTnf0lhIzwbtPj_MCJksNhcD31fCqnxAtiLO2rMiLLa3-20N6468gOgt0NqlX0JP5XPUrVsZ2ZIIQTOUQKX_eeerBMSJopPmYcCXzGU8GLHRssD-_EExUj6k-UHp_QTuMf8gORVLWD6EduYkMunKOv9Lv_fOjKWlX4sZaPhhGQ1GOwBGmx2frq-oR9PEv90m4ePYPkb6BHDYCEmjsCK6K4atE6Tws2MIYxCnYBpkeKryllIcBfKef-eECtuBau_fZWuI-gGaVP4lmZvjpfx_aDJFctpef1YzJtl1_6TYe-zMyYb-FFxuvrF8bQUUADCC8rG5lAcrVFH7c2dL_P9W2AllaTcQQe66IuLC4bGrjgKtToDqpMX9__CmD0unQARDBPPOvo8vjtjM7Xu43rZoO8aaFNgyvHXG7fTrllQYCrFrNr0smM0bXdwIzPFOM840bvdhdjJS2pxgSgjKcXYmN8wwpjcQHsb4df7FB_xrNviP2YQbhqZ4NnKIH6etVeOXb1nDyf_lXAYVnqov-qlyGloouW_FguI0l9lcHaCgLO3fhA86bqJm7mSbLDDwMeouGl9llm3AqS5aSbS-KA-YPjyDCxShtFkCrHw-MOPBITKYmm0=w1300-h975-no" alt="Prototype Board"/></p>
<br>
<br>

OSH Park Project Link: <a href="https://oshpark.com/shared_projects/60oX7NRb"><img src="https://oshpark.com/assets/badge-5b7ec47045b78aef6eb9d83b3bac6b1920de805e9a0c227658eac6e19a045b9c.png" alt="Order from OSH Park"></img></a>
