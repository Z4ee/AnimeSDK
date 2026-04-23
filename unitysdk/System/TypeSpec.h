#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/TypeSpec_DisplayNameFormat.h"

namespace System { class ModifierSpec; }
namespace System { class String; }
namespace System { class Type; }
namespace System { class TypeIdentifier; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Func_4; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Reflection { class Assembly; }
namespace System::Reflection { class AssemblyName; }
namespace System::Text { class StringBuilder; }

#define SYSTEM_TYPESPEC_ADDMODIFIER_OFFSET UNITYSDK_OFFSET(0x1789CEB0)
#define SYSTEM_TYPESPEC_ADDNAME_OFFSET UNITYSDK_OFFSET(0x1789CD50)
#define SYSTEM_TYPESPEC_BOUNDCHECK_OFFSET UNITYSDK_OFFSET(0x1789CFD0)
#define SYSTEM_TYPESPEC_GETDISPLAYFULLNAME_OFFSET UNITYSDK_OFFSET(0x1789B560)
#define SYSTEM_TYPESPEC_GETMODIFIERSTRING_OFFSET UNITYSDK_OFFSET(0x1789B940)
#define SYSTEM_TYPESPEC_GET_DISPLAYFULLNAME_OFFSET UNITYSDK_OFFSET(0x1789B910)
#define SYSTEM_TYPESPEC_GET_HASMODIFIERS_OFFSET UNITYSDK_OFFSET(0x1789B550)
#define SYSTEM_TYPESPEC_PARSEDTYPEIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x1789CE60)
#define SYSTEM_TYPESPEC_PARSE_1_OFFSET UNITYSDK_OFFSET(0x1789BB20)
#define SYSTEM_TYPESPEC_PARSE_OFFSET UNITYSDK_OFFSET(0x1789AB60)
#define SYSTEM_TYPESPEC_RESOLVE_OFFSET UNITYSDK_OFFSET(0x1789AC20)
#define SYSTEM_TYPESPEC_SKIPSPACE_OFFSET UNITYSDK_OFFSET(0x1789CF40)
#define SYSTEM_TYPESPEC_UNESCAPEINTERNALNAME_OFFSET UNITYSDK_OFFSET(0x1789A220)
#define SYSTEM_TYPESPEC__CTOR_OFFSET UNITYSDK_OFFSET(0x1789D050)

namespace System
{
	inline static constexpr unsigned int TypeSpec_TypeDefinitionIndex = 445;

	class TypeSpec : public ::System::Object
	{
	public:
		::System::String* display_fullname; // 0x10
		::System::Collections::Generic::List_1<::System::TypeIdentifier*>* nested; // 0x18
		::System::Collections::Generic::List_1<::System::TypeSpec*>* generic_params; // 0x20
		::System::TypeIdentifier* name; // 0x28
		::System::String* assembly_name; // 0x30
		::System::Collections::Generic::List_1<::System::ModifierSpec*>* modifier_spec; // 0x38
		::System::Boolean is_byref; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPESPEC__CTOR_OFFSET))(this);
		}

		::System::Boolean get_HasModifiers()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPESPEC_GET_HASMODIFIERS_OFFSET))(this);
		}

		::System::String* GetDisplayFullName(::System::TypeSpec_DisplayNameFormat flags)
		{
			return ((::System::String*(*)(::PVOID, ::System::TypeSpec_DisplayNameFormat))((::PBYTE)hIl2Cpp + SYSTEM_TYPESPEC_GETDISPLAYFULLNAME_OFFSET))(this, flags);
		}

		::System::Text::StringBuilder* GetModifierString(::System::Text::StringBuilder* sb)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + SYSTEM_TYPESPEC_GETMODIFIERSTRING_OFFSET))(this, sb);
		}

		::System::String* get_DisplayFullName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPESPEC_GET_DISPLAYFULLNAME_OFFSET))(this);
		}

		static ::System::TypeSpec* Parse(::System::String* typeName)
		{
			return ((::System::TypeSpec*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TYPESPEC_PARSE_OFFSET))(typeName);
		}

		static ::System::String* UnescapeInternalName(::System::String* displayName)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TYPESPEC_UNESCAPEINTERNALNAME_OFFSET))(displayName);
		}

		::System::Type* Resolve(::System::Func_2<::System::Reflection::AssemblyName*, ::System::Reflection::Assembly*>* assemblyResolver, ::System::Func_4<::System::Reflection::Assembly*, ::System::String*, ::System::Boolean, ::System::Type*>* typeResolver, ::System::Boolean throwOnError, ::System::Boolean ignoreCase)
		{
			return ((::System::Type*(*)(::PVOID, ::System::Func_2<::System::Reflection::AssemblyName*, ::System::Reflection::Assembly*>*, ::System::Func_4<::System::Reflection::Assembly*, ::System::String*, ::System::Boolean, ::System::Type*>*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TYPESPEC_RESOLVE_OFFSET))(this, assemblyResolver, typeResolver, throwOnError, ignoreCase);
		}

		::System::Void AddName(::System::String* type_name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TYPESPEC_ADDNAME_OFFSET))(this, type_name);
		}

		::System::Void AddModifier(::System::ModifierSpec* md)
		{
			return ((::System::Void(*)(::PVOID, ::System::ModifierSpec*))((::PBYTE)hIl2Cpp + SYSTEM_TYPESPEC_ADDMODIFIER_OFFSET))(this, md);
		}

		static ::System::Void SkipSpace(::System::String* name, ::System::Int32& pos)
		{
			return ((::System::Void(*)(::System::String*, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_TYPESPEC_SKIPSPACE_OFFSET))(name, pos);
		}

		static ::System::Void BoundCheck(::System::Int32 idx, ::System::String* s)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TYPESPEC_BOUNDCHECK_OFFSET))(idx, s);
		}

		static ::System::TypeIdentifier* ParsedTypeIdentifier(::System::String* displayName)
		{
			return ((::System::TypeIdentifier*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TYPESPEC_PARSEDTYPEIDENTIFIER_OFFSET))(displayName);
		}

		static ::System::TypeSpec* Parse_1(::System::String* name, ::System::Int32& p, ::System::Boolean is_recurse, ::System::Boolean allow_aqn)
		{
			return ((::System::TypeSpec*(*)(::System::String*, ::System::Int32&, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TYPESPEC_PARSE_1_OFFSET))(name, p, is_recurse, allow_aqn);
		}
	};
}
