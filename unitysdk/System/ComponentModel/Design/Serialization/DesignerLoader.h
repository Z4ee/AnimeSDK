#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::ComponentModel::Design::Serialization { class IDesignerLoaderHost; }

#define SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_DESIGNERLOADER_FLUSH_OFFSET UNITYSDK_OFFSET(0x1A23F850)
#define SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_DESIGNERLOADER_GET_LOADING_OFFSET UNITYSDK_OFFSET(0x1A23F840)
#define SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_DESIGNERLOADER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A23F860)

namespace System::ComponentModel::Design::Serialization
{
	inline static constexpr unsigned int DesignerLoader_TypeDefinitionIndex = 3101;

	class DesignerLoader : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_DESIGNERLOADER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_Loading()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_DESIGNERLOADER_GET_LOADING_OFFSET))(this);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_DESIGNERLOADER_FLUSH_OFFSET))(this);
		}
	};
}
