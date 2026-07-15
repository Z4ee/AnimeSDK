#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Reflection { class FieldInfo; }
namespace UnityEngine::Rendering { template <typename T> class ObjectParameter_1___c; }

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int ObjectParameter_1___c_TypeDefinitionIndex = 34222;

	template <typename T>
	class ObjectParameter_1___c : public ::System::Object
	{
	public:
		static ::UnityEngine::Rendering::ObjectParameter_1___c<T>** StaticGet___9()
		{
			return (::UnityEngine::Rendering::ObjectParameter_1___c<T>**)Il2CppClass::FromTypeDefinitionIndex(ObjectParameter_1___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_2<::System::Reflection::FieldInfo*, ::System::Boolean>** StaticGet___9__9_0()
		{
			return (::System::Func_2<::System::Reflection::FieldInfo*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ObjectParameter_1___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_2<::System::Reflection::FieldInfo*, ::System::Int32>** StaticGet___9__9_1()
		{
			return (::System::Func_2<::System::Reflection::FieldInfo*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ObjectParameter_1___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
