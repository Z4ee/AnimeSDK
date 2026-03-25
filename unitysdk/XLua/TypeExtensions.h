#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }

#define XLUA_TYPEEXTENSIONS_BASETYPE_OFFSET UNITYSDK_OFFSET(0x1047DFF0)
#define XLUA_TYPEEXTENSIONS_CSHARPNAME_OFFSET UNITYSDK_OFFSET(0x104826C0)
#define XLUA_TYPEEXTENSIONS_GETFRIENDLYNAME_OFFSET UNITYSDK_OFFSET(0x10482310)
#define XLUA_TYPEEXTENSIONS_ISABSTRACT_OFFSET UNITYSDK_OFFSET(0x10482150)
#define XLUA_TYPEEXTENSIONS_ISCLASS_OFFSET UNITYSDK_OFFSET(0x10482230)
#define XLUA_TYPEEXTENSIONS_ISENUM_OFFSET UNITYSDK_OFFSET(0x10476AE0)
#define XLUA_TYPEEXTENSIONS_ISGENERICTYPEDEFINITION_OFFSET UNITYSDK_OFFSET(0x1047CAA0)
#define XLUA_TYPEEXTENSIONS_ISGENERICTYPE_OFFSET UNITYSDK_OFFSET(0x10482280)
#define XLUA_TYPEEXTENSIONS_ISINTERFACE_OFFSET UNITYSDK_OFFSET(0x104821B0)
#define XLUA_TYPEEXTENSIONS_ISNESTEDPUBLIC_OFFSET UNITYSDK_OFFSET(0x104822B0)
#define XLUA_TYPEEXTENSIONS_ISPRIMITIVE_OFFSET UNITYSDK_OFFSET(0x10482120)
#define XLUA_TYPEEXTENSIONS_ISPUBLIC_OFFSET UNITYSDK_OFFSET(0x104822E0)
#define XLUA_TYPEEXTENSIONS_ISSEALED_OFFSET UNITYSDK_OFFSET(0x10482180)
#define XLUA_TYPEEXTENSIONS_ISVALUETYPE_OFFSET UNITYSDK_OFFSET(0x104820F0)

namespace XLua
{
	inline static constexpr unsigned int TypeExtensions_TypeDefinitionIndex = 40538;

	class TypeExtensions : public ::System::Object
	{
	public:
		static ::System::Boolean IsValueType(::System::Type* type)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + XLUA_TYPEEXTENSIONS_ISVALUETYPE_OFFSET))(type);
		}

		static ::System::Boolean IsEnum(::System::Type* type)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + XLUA_TYPEEXTENSIONS_ISENUM_OFFSET))(type);
		}

		static ::System::Boolean IsPrimitive(::System::Type* type)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + XLUA_TYPEEXTENSIONS_ISPRIMITIVE_OFFSET))(type);
		}

		static ::System::Boolean IsAbstract(::System::Type* type)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + XLUA_TYPEEXTENSIONS_ISABSTRACT_OFFSET))(type);
		}

		static ::System::Boolean IsSealed(::System::Type* type)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + XLUA_TYPEEXTENSIONS_ISSEALED_OFFSET))(type);
		}

		static ::System::Boolean IsInterface(::System::Type* type)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + XLUA_TYPEEXTENSIONS_ISINTERFACE_OFFSET))(type);
		}

		static ::System::Boolean IsClass(::System::Type* type)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + XLUA_TYPEEXTENSIONS_ISCLASS_OFFSET))(type);
		}

		static ::System::Type* BaseType(::System::Type* type)
		{
			return ((::System::Type*(*)(::System::Type*))((::PBYTE)hIl2Cpp + XLUA_TYPEEXTENSIONS_BASETYPE_OFFSET))(type);
		}

		static ::System::Boolean IsGenericType(::System::Type* type)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + XLUA_TYPEEXTENSIONS_ISGENERICTYPE_OFFSET))(type);
		}

		static ::System::Boolean IsGenericTypeDefinition(::System::Type* type)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + XLUA_TYPEEXTENSIONS_ISGENERICTYPEDEFINITION_OFFSET))(type);
		}

		static ::System::Boolean IsNestedPublic(::System::Type* type)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + XLUA_TYPEEXTENSIONS_ISNESTEDPUBLIC_OFFSET))(type);
		}

		static ::System::Boolean IsPublic(::System::Type* type)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + XLUA_TYPEEXTENSIONS_ISPUBLIC_OFFSET))(type);
		}

		static ::System::String* GetFriendlyName(::System::Type* type)
		{
			return ((::System::String*(*)(::System::Type*))((::PBYTE)hIl2Cpp + XLUA_TYPEEXTENSIONS_GETFRIENDLYNAME_OFFSET))(type);
		}

		static ::System::String* CSharpName(::System::Type* type)
		{
			return ((::System::String*(*)(::System::Type*))((::PBYTE)hIl2Cpp + XLUA_TYPEEXTENSIONS_CSHARPNAME_OFFSET))(type);
		}
	};
}
