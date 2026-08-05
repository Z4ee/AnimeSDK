#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ConsoleObjectType.h"

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int ConsoleObjectTypeToEnum_Specializer_1_TypeDefinitionIndex = 5690;

	template <typename T>
	class ConsoleObjectTypeToEnum_Specializer_1 : public ::System::Object
	{
	public:
		static ::UnityEngine::ConsoleObjectType* StaticGet_to()
		{
			return (::UnityEngine::ConsoleObjectType*)Il2CppClass::FromTypeDefinitionIndex(ConsoleObjectTypeToEnum_Specializer_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
