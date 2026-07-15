#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/BasicQueue.h"

namespace UnityEngine::Rendering { template <typename T> class CommonObject_1; }
namespace UnityEngine::Rendering { template <typename T> class CreateObj_1; }

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int CommonObject_1_TypeDefinitionIndex = 34071;

	template <typename T>
	class CommonObject_1 : public ::System::Object
	{
	public:
		::UnityEngine::Rendering::BasicQueue sharedQueue; // 0x0
		static ::UnityEngine::Rendering::CommonObject_1<T>** StaticGet__singleton_k__BackingField()
		{
			return (::UnityEngine::Rendering::CommonObject_1<T>**)Il2CppClass::FromTypeDefinitionIndex(CommonObject_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::UnityEngine::Rendering::CreateObj_1<T>** StaticGet_m_Creator()
		{
			return (::UnityEngine::Rendering::CreateObj_1<T>**)Il2CppClass::FromTypeDefinitionIndex(CommonObject_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
