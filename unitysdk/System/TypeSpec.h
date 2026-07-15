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

#define SYSTEM_TYPESPEC_ADDMODIFIER_OFFSET UNITYSDK_OFFSET(0x1A761C10)
#define SYSTEM_TYPESPEC_ADDNAME_OFFSET UNITYSDK_OFFSET(0x1A761A50)
#define SYSTEM_TYPESPEC_BOUNDCHECK_OFFSET UNITYSDK_OFFSET(0x1A761D80)
#define SYSTEM_TYPESPEC_GETDISPLAYFULLNAME_OFFSET UNITYSDK_OFFSET(0x1A75FA80)
#define SYSTEM_TYPESPEC_GETMODIFIERSTRING_OFFSET UNITYSDK_OFFSET(0x1A7603F0)
#define SYSTEM_TYPESPEC_GET_DISPLAYFULLNAME_OFFSET UNITYSDK_OFFSET(0x1A7603C0)
#define SYSTEM_TYPESPEC_GET_HASMODIFIERS_OFFSET UNITYSDK_OFFSET(0x1A75FA70)
#define SYSTEM_TYPESPEC_PARSEDTYPEIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x1A761BC0)
#define SYSTEM_TYPESPEC_PARSE_1_OFFSET UNITYSDK_OFFSET(0x1A7606B0)
#define SYSTEM_TYPESPEC_PARSE_OFFSET UNITYSDK_OFFSET(0x1A75EEA0)
#define SYSTEM_TYPESPEC_RESOLVE_OFFSET UNITYSDK_OFFSET(0x1A75EF60)
#define SYSTEM_TYPESPEC_SKIPSPACE_OFFSET UNITYSDK_OFFSET(0x1A761CF0)
#define SYSTEM_TYPESPEC_UNESCAPEINTERNALNAME_OFFSET UNITYSDK_OFFSET(0x1A75E410)
#define SYSTEM_TYPESPEC__CTOR_OFFSET UNITYSDK_OFFSET(0x1A761E00)

namespace System
{
	inline static constexpr unsigned int TypeSpec_TypeDefinitionIndex = 444;

	class TypeSpec : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::TypeSpec*>* generic_params; // 0x10
		::System::String* display_fullname; // 0x18
		::System::TypeIdentifier* name; // 0x20
		::System::Collections::Generic::List_1<::System::TypeIdentifier*>* nested; // 0x28
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

		::System::String* GetDisplayFullName(::System::TypeSpec_DisplayNameFormat a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::TypeSpec_DisplayNameFormat))((::PBYTE)hIl2Cpp + SYSTEM_TYPESPEC_GETDISPLAYFULLNAME_OFFSET))(this, a1);
		}

		::System::Text::StringBuilder* GetModifierString(::System::Text::StringBuilder* a1)
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + SYSTEM_TYPESPEC_GETMODIFIERSTRING_OFFSET))(this, a1);
		}

		::System::String* get_DisplayFullName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPESPEC_GET_DISPLAYFULLNAME_OFFSET))(this);
		}

		static ::System::TypeSpec* Parse(::System::String* a1)
		{
			return ((::System::TypeSpec*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TYPESPEC_PARSE_OFFSET))(a1);
		}

		static ::System::String* UnescapeInternalName(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TYPESPEC_UNESCAPEINTERNALNAME_OFFSET))(a1);
		}

		::System::Type* Resolve(::System::Func_2<::System::Reflection::AssemblyName*, ::System::Reflection::Assembly*>* a1, ::System::Func_4<::System::Reflection::Assembly*, ::System::String*, ::System::Boolean, ::System::Type*>* a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Type*(*)(::PVOID, ::System::Func_2<::System::Reflection::AssemblyName*, ::System::Reflection::Assembly*>*, ::System::Func_4<::System::Reflection::Assembly*, ::System::String*, ::System::Boolean, ::System::Type*>*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TYPESPEC_RESOLVE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void AddName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TYPESPEC_ADDNAME_OFFSET))(this, a1);
		}

		::System::Void AddModifier(::System::ModifierSpec* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ModifierSpec*))((::PBYTE)hIl2Cpp + SYSTEM_TYPESPEC_ADDMODIFIER_OFFSET))(this, a1);
		}

		static ::System::Void SkipSpace(::System::String* a1, ::System::Int32& a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_TYPESPEC_SKIPSPACE_OFFSET))(a1, a2);
		}

		static ::System::Void BoundCheck(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TYPESPEC_BOUNDCHECK_OFFSET))(a1, a2);
		}

		static ::System::TypeIdentifier* ParsedTypeIdentifier(::System::String* a1)
		{
			return ((::System::TypeIdentifier*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TYPESPEC_PARSEDTYPEIDENTIFIER_OFFSET))(a1);
		}

		static ::System::TypeSpec* Parse_1(::System::String* a1, ::System::Int32& a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::TypeSpec*(*)(::System::String*, ::System::Int32&, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TYPESPEC_PARSE_1_OFFSET))(a1, a2, a3, a4);
		}
	};
}
