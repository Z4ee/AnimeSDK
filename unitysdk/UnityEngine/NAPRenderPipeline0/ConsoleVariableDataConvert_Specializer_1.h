#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ConsoleVariableData.h"
#include "unitysdk/UnityEngine/ConsoleVariableFlag.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int ConsoleVariableDataConvert_Specializer_1_TypeDefinitionIndex = 5685;

	template <typename T>
	class ConsoleVariableDataConvert_Specializer_1 : public ::System::Object
	{
	public:
		static ::System::Func_2<::UnityEngine::ConsoleVariableData, T>** StaticGet_convertTo()
		{
			return (::System::Func_2<::UnityEngine::ConsoleVariableData, T>**)Il2CppClass::FromTypeDefinitionIndex(ConsoleVariableDataConvert_Specializer_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_2<T, ::UnityEngine::ConsoleVariableData>** StaticGet_convertFrom()
		{
			return (::System::Func_2<T, ::UnityEngine::ConsoleVariableData>**)Il2CppClass::FromTypeDefinitionIndex(ConsoleVariableDataConvert_Specializer_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_1<::UnityEngine::ConsoleVariableFlag>** StaticGet_flag()
		{
			return (::System::Func_1<::UnityEngine::ConsoleVariableFlag>**)Il2CppClass::FromTypeDefinitionIndex(ConsoleVariableDataConvert_Specializer_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
