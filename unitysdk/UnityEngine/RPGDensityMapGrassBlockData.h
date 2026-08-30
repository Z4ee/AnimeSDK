#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Object.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define UNITYENGINE_RPGDENSITYMAPGRASSBLOCKDATA_GETPREFABPATHSLOD0_OFFSET UNITYSDK_OFFSET(0x1EABC0B0)
#define UNITYENGINE_RPGDENSITYMAPGRASSBLOCKDATA_GETPREFABSLOD0IMPL_OFFSET UNITYSDK_OFFSET(0x1EABC0C0)

namespace UnityEngine
{
	inline static constexpr unsigned int RPGDensityMapGrassBlockData_TypeDefinitionIndex = 4279;

	class RPGDensityMapGrassBlockData : public ::UnityEngine::Object
	{
	public:
		::System::Void GetPrefabPathsLod0(::System::Collections::Generic::List_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RPGDENSITYMAPGRASSBLOCKDATA_GETPREFABPATHSLOD0_OFFSET))(this, a1);
		}

		::System::Void GetPrefabsLod0Impl(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_RPGDENSITYMAPGRASSBLOCKDATA_GETPREFABSLOD0IMPL_OFFSET))(this, a1);
		}
	};
}
