#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/EventArgs.h"

namespace System::ComponentModel::Design { class IDesignerHost; }

#define SYSTEM_COMPONENTMODEL_DESIGN_DESIGNEREVENTARGS_GET_DESIGNER_OFFSET UNITYSDK_OFFSET(0x1C64CE50)
#define SYSTEM_COMPONENTMODEL_DESIGN_DESIGNEREVENTARGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C64CDF0)

namespace System::ComponentModel::Design
{
	inline static constexpr unsigned int DesignerEventArgs_TypeDefinitionIndex = 3056;

	class DesignerEventArgs : public ::System::EventArgs
	{
	public:
		::System::ComponentModel::Design::IDesignerHost* host; // 0x10

		::System::Void _ctor(::System::ComponentModel::Design::IDesignerHost* host)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::Design::IDesignerHost*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_DESIGNEREVENTARGS__CTOR_OFFSET))(this, host);
		}

		::System::ComponentModel::Design::IDesignerHost* get_Designer()
		{
			return ((::System::ComponentModel::Design::IDesignerHost*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_DESIGNEREVENTARGS_GET_DESIGNER_OFFSET))(this);
		}
	};
}
