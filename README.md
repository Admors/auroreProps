# Modélisation Props - Arma 3

## 🧑‍💻 Informations
> Aurore Props référencie nos essaient à la modélisation Arma 3.

## 🏢 Adeptus TEAM
> ### [Web](https://www.adeptusrepublica.fr)

## 🤝 Contributeurs
> + [Admors](https://steamcommunity.com/profiles/76561198134513977)
> + [SixOne](https://steamcommunity.com/profiles/76561198063259158)

## 🧩 Usage(s)
### Un Objet
> Les objets sont réalisés à l'aide de faces.
> Par exemple : un carré.
> Un carré est composé de 6 faces. Lorsque vous déplacez le carré, les 6 faces sont calculées par le processeur.
> Il est donc conseillé de réaliser le moins de faces possible pour ces objets dans Arma 3. Cela permettra d'optimiser les performances du jeu, car un grand nombre de faces à calculer peut entraîner une charge importante sur le processeur et affecter les performances globales du jeu.
> Il est important de prendre en compte cette recommandation lors de la création de modèles d'objets pour Arma 3, afin de garantir une expérience de jeu fluide et optimale pour les joueurs.

### Les LOD
| LOD Name     | Description |
| ----------- | ----------- |
| **1 à 6 Résolution** | Référence la résulution d'un objet sur 6 distances différentes.|
| **ShadowVolume** | Utilisé pour générer les ombres portées sur l'objet. Il présente une géométrie simplifiée qui capture l'essentiel de la forme de l'objet sans les détails fins. |
| **Geometry** | Représente la version principale de l'objet, utilisée lorsque le joueur est très proche. Il présente la géométrie la plus détaillée avec tous les éléments visuels.|
| **Geometry Phys** | Utilisé pour les collisions physiques avec l'objet. Il offre une géométrie simplifiée qui permet aux joueurs et aux véhicules d'interagir correctement avec l'objet. |
| **Memory** | Conçu pour optimiser l'utilisation de la mémoire. Il utilise une géométrie simplifiée qui réduit la charge sur le système tout en maintenant une apparence acceptable à distance.|
| **LandContact**| Définit la géométrie de contact avec le sol. Il est utilisé pour assurer que l'objet s'aligne correctement avec le terrain et réagit de manière réaliste aux pentes et aux déformations du sol.|
| **Roadway** | Utilisé pour les objets qui interagissent avec les routes, tels que les véhicules. Il permet une détection précise des collisions et des mouvements fluides sur les routes.|
| **Hit-Point** | Utilisé pour les objets qui nécessitent une représentation spécifique pour les points d'intérêt. Par exemple, les lumières ou les effets spéciaux peuvent être configurés dans ce LOD.|
| **Fire Geometry** | Représente la géométrie de l'objet lorsqu'il est en feu. Il peut inclure des éléments visuels supplémentaires, tels que des flammes ou des fumées, pour représenter l'état enflammé de l'objet.|
<center width="140">
    <img src="https://cdn.discordapp.com/attachments/1079725233596026921/1112071565140561940/image.png"/>
    <p>La geometrie doit être travailler dans Structure et définie par HEX.</p>
    <img src="https://cdn.discordapp.com/attachments/1079725233596026921/1112111863061299331/image.png" width="560"/>
</center>
