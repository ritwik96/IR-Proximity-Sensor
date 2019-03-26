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
<p><img src="https://lh3.googleusercontent.com/rQIDqHgQNzUn8bNwGcqpcWkm8N82Vkm_IoyMOj0m96qp2jwOzbMRH23VbJQcbyqqFiDR4u7gdcr5QfOCZWQhYAVUYIOoYXesB07cLK7DwNNPyev6dWRmuLRvMG5-XiN7M4-klAdJXMCjl3JqfJuu02t09h3jwSgfnnr8OiOs-mg8sx_L54pn8xyPtHkvfEUKX5rBxyhcHcCfgPGDfX2uJk8v8okNQLdCFbvUA5VPKS_9Lq_WXCyaOYjoyU46UVSkWXwr7Ru3i3ruodCEI2TI5xkIYp-Tzog_-i6x9mHEJTwQPcoLIkWCZv1ZErHqfVNitam3uF-we3Ts8wE2k1wum3H_mYBSeFWk8hSYR3p-ujJ6N-_TdswVdnzWh7CGlL-bbNEtxooE1Lkz-b8PIF4eYhV5RV-wLZ-s1hoSclELincjGaTG3aov85OzdDEVrc6Jrrr-Z_TfgOXPhpVyV1HnsJbGqjUXiSUWpKNnrDZBnVnYw0RQnxDOCNeyCfK1rOWJDFQbKYsp3_pxUVxcv9_XJlZu_0f5UzBmt05iKS90CvL6_K6USwCgcaY9NmJDOsy5AVQDgI1bjAU8xi_4EZEohuCtEVai5RqMPMvV=s975-no" alt="Prototype Board" /></p>
<br>
<br>
<b> BreadBoard based testing </b>
<p><img src="https://lh3.googleusercontent.com/SDFgnQD1sv0Z7hWS3huI0JjO5AODxS5uVLcv800bWa2sblTouSSx1dwgqbHplr-XKo_L0DOxVc8g0IbbLIJgdpPonHSmgKBA1HzSRwWHSysfYEdgW-nCDf7SGFaZHhUsaXRvCmCCMy-5r023RegIi8wge8RJGViaHQ2EI3D-PgM9_hgkGb0IzjXQ6ZrJsZaQRCOplyu-Q1ZUuoUszlsVqnyGRN_L3RH0onFKSa3bat5MAcHLgRjvg6xQ524TNZhjdOWuoVulxBoci_lIhhiOQdrJcsS6JXyqe8S51OuP2OocKdVCWDcWffssU9VFBy5hl672Sq_anB0ggUUOa4TA9gLQ6FgxgXLgj7D_sOYJB_b1dmaAt3TME3lfs_HCsGuhs71gdtwDcjJ3EBmSz1wNRXTE2iXIMPIj73SUqi9ajlq1m4DULQ5VL9HBaEExg4Tc_srm88sy0kO3rtRiYu9t6EjZ25s0A3gm4dwD6JGRfZfmoFt_qMIk55CLx52exf3o1Kr3qp5lqfZ8f_Q7QDc4zDyE74Vfeb2U8MXsFIUdaerZ3WreibRvig3k7gnhLAFBew7YCi7uVorRlA9ILUHKWwDe2vX_y6kutabQ=s1300-w1300-h975-no" alt="Prototype Board" /></p>
<br>
<br>

OSH Park Project Link: <a href="https://oshpark.com/shared_projects/O8bRqG8g"><img src="https://oshpark.com/assets/badge-5b7ec47045b78aef6eb9d83b3bac6b1920de805e9a0c227658eac6e19a045b9c.png" alt="Order from OSH Park"></img></a>
