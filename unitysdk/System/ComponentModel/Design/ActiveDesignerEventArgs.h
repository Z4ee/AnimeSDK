#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/EventArgs.h"

namespace System::ComponentModel::Design { class IDesignerHost; }

#define SYSTEM_COMPONENTMODEL_DESIGN_ACTIVEDESIGNEREVENTARGS_GET_NEWDESIGNER_OFFSET UNITYSDK_OFFSET(0x19EE6480)
#define SYSTEM_COMPONENTMODEL_DESIGN_ACTIVEDESIGNEREVENTARGS_GET_OLDDESIGNER_OFFSET UNITYSDK_OFFSET(0x19EE6470)
#define SYSTEM_COMPONENTMODEL_DESIGN_ACTIVEDESIGNEREVENTARGS__CTOR_OFFSET UNITYSDK_OFFSET(0x19EE6400)

namespace System::ComponentModel::Design
{
	inline static constexpr unsigned int ActiveDesignerEventArgs_TypeDefinitionIndex = 3031;

	class ActiveDesignerEventArgs : public ::System::EventArgs
	{
	public:
		::System::ComponentModel::Design::IDesignerHost* newDesigner; // 0x10
		::System::ComponentModel::Design::IDesignerHost* oldDesigner; // 0x18

		::System::Void _ctor(::System::ComponentModel::Design::IDesignerHost* oldDesigner, ::System::ComponentModel::Design::IDesignerHost* newDesigner)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::Design::IDesignerHost*, ::System::ComponentModel::Design::IDesignerHost*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_ACTIVEDESIGNEREVENTARGS__CTOR_OFFSET))(this, oldDesigner, newDesigner);
		}

		::System::ComponentModel::Design::IDesignerHost* get_OldDesigner()
		{
			return ((::System::ComponentModel::Design::IDesignerHost*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_ACTIVEDESIGNEREVENTARGS_GET_OLDDESIGNER_OFFSET))(this);
		}

		::System::ComponentModel::Design::IDesignerHost* get_NewDesigner()
		{
			return ((::System::ComponentModel::Design::IDesignerHost*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_ACTIVEDESIGNEREVENTARGS_GET_NEWDESIGNER_OFFSET))(this);
		}
	};
}
