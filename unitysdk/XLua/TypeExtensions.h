#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }

#define XLUA_TYPEEXTENSIONS_BASETYPE_OFFSET UNITYSDK_OFFSET(0x13439680)
#define XLUA_TYPEEXTENSIONS_CSHARPNAME_OFFSET UNITYSDK_OFFSET(0x1343DF50)
#define XLUA_TYPEEXTENSIONS_GETFRIENDLYNAME_OFFSET UNITYSDK_OFFSET(0x1343DBA0)
#define XLUA_TYPEEXTENSIONS_ISABSTRACT_OFFSET UNITYSDK_OFFSET(0x1343D9E0)
#define XLUA_TYPEEXTENSIONS_ISCLASS_OFFSET UNITYSDK_OFFSET(0x1343DAC0)
#define XLUA_TYPEEXTENSIONS_ISENUM_OFFSET UNITYSDK_OFFSET(0x13431F60)
#define XLUA_TYPEEXTENSIONS_ISGENERICTYPEDEFINITION_OFFSET UNITYSDK_OFFSET(0x134380D0)
#define XLUA_TYPEEXTENSIONS_ISGENERICTYPE_OFFSET UNITYSDK_OFFSET(0x1343DB10)
#define XLUA_TYPEEXTENSIONS_ISINTERFACE_OFFSET UNITYSDK_OFFSET(0x1343DA40)
#define XLUA_TYPEEXTENSIONS_ISNESTEDPUBLIC_OFFSET UNITYSDK_OFFSET(0x1343DB40)
#define XLUA_TYPEEXTENSIONS_ISPRIMITIVE_OFFSET UNITYSDK_OFFSET(0x1343D9B0)
#define XLUA_TYPEEXTENSIONS_ISPUBLIC_OFFSET UNITYSDK_OFFSET(0x1343DB70)
#define XLUA_TYPEEXTENSIONS_ISSEALED_OFFSET UNITYSDK_OFFSET(0x1343DA10)
#define XLUA_TYPEEXTENSIONS_ISVALUETYPE_OFFSET UNITYSDK_OFFSET(0x1343D980)

namespace XLua
{
	inline static constexpr unsigned int TypeExtensions_TypeDefinitionIndex = 47041;

	class TypeExtensions : public ::System::Object
	{
	public:
		static ::System::Boolean IsValueType(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + XLUA_TYPEEXTENSIONS_ISVALUETYPE_OFFSET))(a1);
		}

		static ::System::Boolean IsEnum(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + XLUA_TYPEEXTENSIONS_ISENUM_OFFSET))(a1);
		}

		static ::System::Boolean IsPrimitive(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + XLUA_TYPEEXTENSIONS_ISPRIMITIVE_OFFSET))(a1);
		}

		static ::System::Boolean IsAbstract(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + XLUA_TYPEEXTENSIONS_ISABSTRACT_OFFSET))(a1);
		}

		static ::System::Boolean IsSealed(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + XLUA_TYPEEXTENSIONS_ISSEALED_OFFSET))(a1);
		}

		static ::System::Boolean IsInterface(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + XLUA_TYPEEXTENSIONS_ISINTERFACE_OFFSET))(a1);
		}

		static ::System::Boolean IsClass(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + XLUA_TYPEEXTENSIONS_ISCLASS_OFFSET))(a1);
		}

		static ::System::Type* BaseType(::System::Type* a1)
		{
			return ((::System::Type*(*)(::System::Type*))((::PBYTE)hIl2Cpp + XLUA_TYPEEXTENSIONS_BASETYPE_OFFSET))(a1);
		}

		static ::System::Boolean IsGenericType(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + XLUA_TYPEEXTENSIONS_ISGENERICTYPE_OFFSET))(a1);
		}

		static ::System::Boolean IsGenericTypeDefinition(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + XLUA_TYPEEXTENSIONS_ISGENERICTYPEDEFINITION_OFFSET))(a1);
		}

		static ::System::Boolean IsNestedPublic(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + XLUA_TYPEEXTENSIONS_ISNESTEDPUBLIC_OFFSET))(a1);
		}

		static ::System::Boolean IsPublic(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + XLUA_TYPEEXTENSIONS_ISPUBLIC_OFFSET))(a1);
		}

		static ::System::String* GetFriendlyName(::System::Type* a1)
		{
			return ((::System::String*(*)(::System::Type*))((::PBYTE)hIl2Cpp + XLUA_TYPEEXTENSIONS_GETFRIENDLYNAME_OFFSET))(a1);
		}

		static ::System::String* CSharpName(::System::Type* a1)
		{
			return ((::System::String*(*)(::System::Type*))((::PBYTE)hIl2Cpp + XLUA_TYPEEXTENSIONS_CSHARPNAME_OFFSET))(a1);
		}
	};
}
