#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System
{
	inline static constexpr unsigned int SpanHelpers_PerTypeValues_1_TypeDefinitionIndex = 4965;

	template <typename T>
	class SpanHelpers_PerTypeValues_1 : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_IsReferenceOrContainsReferences()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(SpanHelpers_PerTypeValues_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::Il2CppArray<T>** StaticGet_EmptyArray()
		{
			return (::Il2CppArray<T>**)Il2CppClass::FromTypeDefinitionIndex(SpanHelpers_PerTypeValues_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::IntPtr* StaticGet_ArrayAdjustment()
		{
			return (::System::IntPtr*)Il2CppClass::FromTypeDefinitionIndex(SpanHelpers_PerTypeValues_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
