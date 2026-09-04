let users = {
    name:"ali",
    address:{
        region:{
            name:"Sirdaryo",
            district:{
                name:"Gulistan",
                street:{
                    name:"Istiqlol"
                }
            }
        }
    },
    contacts:{
        names:{
            emails:["ab@gmail.com"],
            phones:["+998975661099","+99892311323"]
        }
    }
}
let {name} = users
let {address: { region: {name:region}}} = users
let {address: { region: {district: {name: district}}}} = users
let {address: { region: {district: {street: { name:street }}}}} = users
let{contacts: {names: {emails:[emails]}}} = users
let{contacts: {names: {phones:[,tel ]}}} = users
console.log(name,region,district,street,emails,tel)

