#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Reflection { class FieldInfo; }
namespace System::Reflection { class MethodInfo; }
namespace System::Reflection { class PropertyInfo; }

#define SYSTEM_REFLECTION_RUNTIMEREFLECTIONEXTENSIONS_CHECKANDTHROW_OFFSET UNITYSDK_OFFSET(0x1875E810)
#define SYSTEM_REFLECTION_RUNTIMEREFLECTIONEXTENSIONS_GETRUNTIMEFIELDS_OFFSET UNITYSDK_OFFSET(0x1875E950)
#define SYSTEM_REFLECTION_RUNTIMEREFLECTIONEXTENSIONS_GETRUNTIMEFIELD_OFFSET UNITYSDK_OFFSET(0x1875EA70)
#define SYSTEM_REFLECTION_RUNTIMEREFLECTIONEXTENSIONS_GETRUNTIMEMETHODS_OFFSET UNITYSDK_OFFSET(0x1875E910)
#define SYSTEM_REFLECTION_RUNTIMEREFLECTIONEXTENSIONS_GETRUNTIMEMETHOD_OFFSET UNITYSDK_OFFSET(0x1875EA30)
#define SYSTEM_REFLECTION_RUNTIMEREFLECTIONEXTENSIONS_GETRUNTIMEPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1875E8D0)
#define SYSTEM_REFLECTION_RUNTIMEREFLECTIONEXTENSIONS_GETRUNTIMEPROPERTY_OFFSET UNITYSDK_OFFSET(0x1875E990)

namespace System::Reflection
{
	inline static constexpr unsigned int RuntimeReflectionExtensions_TypeDefinitionIndex = 535;

	class RuntimeReflectionExtensions : public ::System::Object
	{
	public:
		static ::System::Void CheckAndThrow(::System::Type* a1)
		{
			return ((::System::Void(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEREFLECTIONEXTENSIONS_CHECKANDTHROW_OFFSET))(a1);
		}

		static ::System::Collections::Generic::IEnumerable_1<::System::Reflection::PropertyInfo*>* GetRuntimeProperties(::System::Type* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Reflection::PropertyInfo*>*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEREFLECTIONEXTENSIONS_GETRUNTIMEPROPERTIES_OFFSET))(a1);
		}

		static ::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>* GetRuntimeMethods(::System::Type* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEREFLECTIONEXTENSIONS_GETRUNTIMEMETHODS_OFFSET))(a1);
		}

		static ::System::Collections::Generic::IEnumerable_1<::System::Reflection::FieldInfo*>* GetRuntimeFields(::System::Type* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Reflection::FieldInfo*>*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEREFLECTIONEXTENSIONS_GETRUNTIMEFIELDS_OFFSET))(a1);
		}

		static ::System::Reflection::PropertyInfo* GetRuntimeProperty(::System::Type* a1, ::System::String* a2)
		{
			return ((::System::Reflection::PropertyInfo*(*)(::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEREFLECTIONEXTENSIONS_GETRUNTIMEPROPERTY_OFFSET))(a1, a2);
		}

		static ::System::Reflection::MethodInfo* GetRuntimeMethod(::System::Type* a1, ::System::String* a2, ::Il2CppArray<::System::Type*>* a3)
		{
			return ((::System::Reflection::MethodInfo*(*)(::System::Type*, ::System::String*, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEREFLECTIONEXTENSIONS_GETRUNTIMEMETHOD_OFFSET))(a1, a2, a3);
		}

		static ::System::Reflection::FieldInfo* GetRuntimeField(::System::Type* a1, ::System::String* a2)
		{
			return ((::System::Reflection::FieldInfo*(*)(::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEREFLECTIONEXTENSIONS_GETRUNTIMEFIELD_OFFSET))(a1, a2);
		}
	};
}
