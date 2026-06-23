#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Reflection { class ConstructorInfo; }
namespace Utf8Json::Internal::Emit { class MetaMember; }

#define UTF8JSON_INTERNAL_EMIT_METATYPE_GET_BESTMATCHCONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x1E11BB60)
#define UTF8JSON_INTERNAL_EMIT_METATYPE_GET_CONSTRUCTORPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1E11BB80)
#define UTF8JSON_INTERNAL_EMIT_METATYPE_GET_ISCLASS_OFFSET UNITYSDK_OFFSET(0x1E11BB10)
#define UTF8JSON_INTERNAL_EMIT_METATYPE_GET_ISCONCRETECLASS_OFFSET UNITYSDK_OFFSET(0x1E11BB40)
#define UTF8JSON_INTERNAL_EMIT_METATYPE_GET_ISSTRUCT_OFFSET UNITYSDK_OFFSET(0x1E11BB30)
#define UTF8JSON_INTERNAL_EMIT_METATYPE_GET_MEMBERS_OFFSET UNITYSDK_OFFSET(0x1E11BBA0)
#define UTF8JSON_INTERNAL_EMIT_METATYPE_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1E11BAF0)
#define UTF8JSON_INTERNAL_EMIT_METATYPE_SET_BESTMATCHCONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x1E11BB70)
#define UTF8JSON_INTERNAL_EMIT_METATYPE_SET_CONSTRUCTORPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1E11BB90)
#define UTF8JSON_INTERNAL_EMIT_METATYPE_SET_ISCLASS_OFFSET UNITYSDK_OFFSET(0x1E11BB20)
#define UTF8JSON_INTERNAL_EMIT_METATYPE_SET_ISCONCRETECLASS_OFFSET UNITYSDK_OFFSET(0x1E11BB50)
#define UTF8JSON_INTERNAL_EMIT_METATYPE_SET_MEMBERS_OFFSET UNITYSDK_OFFSET(0x1E11BBB0)
#define UTF8JSON_INTERNAL_EMIT_METATYPE_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x1E11BB00)
#define UTF8JSON_INTERNAL_EMIT_METATYPE_TRYGETNEXTCONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x1E11D3C0)
#define UTF8JSON_INTERNAL_EMIT_METATYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E11BBC0)

namespace Utf8Json::Internal::Emit
{
	inline static constexpr unsigned int MetaType_TypeDefinitionIndex = 91257;

	class MetaType : public ::System::Object
	{
	public:
		::System::Reflection::ConstructorInfo* _BestmatchConstructor_k__BackingField; // 0x10
		::Il2CppArray<::Utf8Json::Internal::Emit::MetaMember*>* _ConstructorParameters_k__BackingField; // 0x18
		::System::Type* _Type_k__BackingField; // 0x20
		::Il2CppArray<::Utf8Json::Internal::Emit::MetaMember*>* _Members_k__BackingField; // 0x28
		::System::Boolean _IsClass_k__BackingField; // 0x30
		::System::Boolean _IsConcreteClass_k__BackingField; // 0x31

		::System::Void _ctor(::System::Type* type, ::System::Func_2<::System::String*, ::System::String*>* nameMutetor, ::System::Boolean allowPrivate)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Func_2<::System::String*, ::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_EMIT_METATYPE__CTOR_OFFSET))(this, type, nameMutetor, allowPrivate);
		}

		::System::Type* get_Type()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_EMIT_METATYPE_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_Type(::System::Type* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_EMIT_METATYPE_SET_TYPE_OFFSET))(this, value);
		}

		::System::Boolean get_IsClass()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_EMIT_METATYPE_GET_ISCLASS_OFFSET))(this);
		}

		::System::Void set_IsClass(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_EMIT_METATYPE_SET_ISCLASS_OFFSET))(this, value);
		}

		::System::Boolean get_IsStruct()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_EMIT_METATYPE_GET_ISSTRUCT_OFFSET))(this);
		}

		::System::Boolean get_IsConcreteClass()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_EMIT_METATYPE_GET_ISCONCRETECLASS_OFFSET))(this);
		}

		::System::Void set_IsConcreteClass(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_EMIT_METATYPE_SET_ISCONCRETECLASS_OFFSET))(this, value);
		}

		::System::Reflection::ConstructorInfo* get_BestmatchConstructor()
		{
			return ((::System::Reflection::ConstructorInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_EMIT_METATYPE_GET_BESTMATCHCONSTRUCTOR_OFFSET))(this);
		}

		::System::Void set_BestmatchConstructor(::System::Reflection::ConstructorInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::ConstructorInfo*))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_EMIT_METATYPE_SET_BESTMATCHCONSTRUCTOR_OFFSET))(this, value);
		}

		::Il2CppArray<::Utf8Json::Internal::Emit::MetaMember*>* get_ConstructorParameters()
		{
			return ((::Il2CppArray<::Utf8Json::Internal::Emit::MetaMember*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_EMIT_METATYPE_GET_CONSTRUCTORPARAMETERS_OFFSET))(this);
		}

		::System::Void set_ConstructorParameters(::Il2CppArray<::Utf8Json::Internal::Emit::MetaMember*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Utf8Json::Internal::Emit::MetaMember*>*))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_EMIT_METATYPE_SET_CONSTRUCTORPARAMETERS_OFFSET))(this, value);
		}

		::Il2CppArray<::Utf8Json::Internal::Emit::MetaMember*>* get_Members()
		{
			return ((::Il2CppArray<::Utf8Json::Internal::Emit::MetaMember*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_EMIT_METATYPE_GET_MEMBERS_OFFSET))(this);
		}

		::System::Void set_Members(::Il2CppArray<::Utf8Json::Internal::Emit::MetaMember*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Utf8Json::Internal::Emit::MetaMember*>*))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_EMIT_METATYPE_SET_MEMBERS_OFFSET))(this, value);
		}

		static ::System::Boolean TryGetNextConstructor(::System::Collections::Generic::IEnumerator_1<::System::Reflection::ConstructorInfo*>* ctorEnumerator, ::System::Reflection::ConstructorInfo*& ctor)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::IEnumerator_1<::System::Reflection::ConstructorInfo*>*, ::System::Reflection::ConstructorInfo*&))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_EMIT_METATYPE_TRYGETNEXTCONSTRUCTOR_OFFSET))(ctorEnumerator, ctor);
		}
	};
}
