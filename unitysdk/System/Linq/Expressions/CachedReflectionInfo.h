#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Reflection { class MethodInfo; }

#define SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_MATH_POW_DOUBLE_DOUBLE_OFFSET UNITYSDK_OFFSET(0x1EDA2AA0)
#define SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_STRING_OP_EQUALITY_STRING_STRING_OFFSET UNITYSDK_OFFSET(0x1EDA2910)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int CachedReflectionInfo_TypeDefinitionIndex = 3183;

	class CachedReflectionInfo : public ::System::Object
	{
	public:
		static ::System::Reflection::MethodInfo** StaticGet_s_String_op_Equality_String_String()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(CachedReflectionInfo_TypeDefinitionIndex)->GetStaticField(0x362D0);
		}
		static ::System::Reflection::MethodInfo** StaticGet_s_Math_Pow_Double_Double()
		{
			return (::System::Reflection::MethodInfo**)Il2CppClass::FromTypeDefinitionIndex(CachedReflectionInfo_TypeDefinitionIndex)->GetStaticField(0x362D8);
		}

		static ::System::Reflection::MethodInfo* get_String_op_Equality_String_String()
		{
			return ((::System::Reflection::MethodInfo*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_STRING_OP_EQUALITY_STRING_STRING_OFFSET))();
		}

		static ::System::Reflection::MethodInfo* get_Math_Pow_Double_Double()
		{
			return ((::System::Reflection::MethodInfo*(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_CACHEDREFLECTIONINFO_GET_MATH_POW_DOUBLE_DOUBLE_OFFSET))();
		}
	};
}
