#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Reflection/ResourceLocation.h"

namespace System { class String; }
namespace System::Reflection { class Assembly; }

#define SYSTEM_REFLECTION_MANIFESTRESOURCEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7C1A20)

namespace System::Reflection
{
	inline static constexpr unsigned int ManifestResourceInfo_TypeDefinitionIndex = 541;

	class ManifestResourceInfo : public ::System::Object
	{
	public:
		::System::Reflection::Assembly* _containingAssembly; // 0x10
		::System::String* _containingFileName; // 0x18
		::System::Reflection::ResourceLocation _resourceLocation; // 0x20

		::System::Void _ctor(::System::Reflection::Assembly* containingAssembly, ::System::String* containingFileName, ::System::Reflection::ResourceLocation resourceLocation)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::Assembly*, ::System::String*, ::System::Reflection::ResourceLocation))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MANIFESTRESOURCEINFO__CTOR_OFFSET))(this, containingAssembly, containingFileName, resourceLocation);
		}
	};
}
