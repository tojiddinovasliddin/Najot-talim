import fs from "fs"
import path from "path"

const fileMap = [
  {
    src: [
      {
        modules: [
            'user.js'
        ]
      },
      {
        routes: [
            'user.js'
        ]
      },
      {
        controllers: [
            'user.js'
        ]
      },
      'server.js',
      'config.js'
    ],

  },
  '.env'
];

function creater(fileMap,filepath=process.cwd()){
    for (const el of fileMap) {
        if(typeof(el) == "string"){
            fs.writeFileSync(path.join(filepath,el),"")
        }else{
            let folderName = Object.keys(el)[0]
            let folderPath = path.join(filepath,folderName)
            fs.mkdirSync(path.join(filepath,folderName))
            creater(el[folderName],folderPath)
        }
    }
}

creater(fileMap)
