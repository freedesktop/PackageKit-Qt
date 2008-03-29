#ifndef ROLE_H
#define ROLE_H

#include <QtCore>

#include "Enum.h"

namespace PackageKit {

class Role : public QObject {

	Q_OBJECT
	Q_ENUMS(Value)

public:
typedef enum {
	Cancel,
	Resolve,
	Rollback,
	Get_depends,
	Get_update_detail,
	Get_description,
	Get_files,
	Get_requires,
	Get_updates,
	Search_details,
	Search_file,
	Search_group,
	Search_name,
	Refresh_cache,
	Update_system,
	Remove_package,
	Install_package,
	Install_file,
	Update_package,
	Get_repo_list,
	Repo_enable,
	Repo_set_data,
	Service_pack,
	Unknown
} Value;

};

} // End namespace PackageKit

#endif