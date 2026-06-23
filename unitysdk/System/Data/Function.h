#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Data/FunctionId.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }

#define SYSTEM_DATA_FUNCTION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD54F90)
#define SYSTEM_DATA_FUNCTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CD54D60)
#define SYSTEM_DATA_FUNCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD54CF0)

namespace System::Data
{
	inline static constexpr unsigned int Function_TypeDefinitionIndex = 38646;

	class Function : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_functionName()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Function_TypeDefinitionIndex)->GetStaticField(0x290D0);
		}
		::System::String* _name; // 0x10
		::Il2CppArray<::System::Type*>* _parameters; // 0x18
		::System::Type* _result; // 0x20
		::System::Data::FunctionId _id; // 0x28
		::System::Boolean _isVariantArgumentList; // 0x2C
		::System::Boolean _isValidateArguments; // 0x2D
		::System::Int32 _argumentCount; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_FUNCTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* name, ::System::Data::FunctionId id, ::System::Type* result, ::System::Boolean IsValidateArguments, ::System::Boolean IsVariantArgumentList, ::System::Int32 argumentCount, ::System::Type* a1, ::System::Type* a2, ::System::Type* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Data::FunctionId, ::System::Type*, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::Type*, ::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_FUNCTION__CTOR_1_OFFSET))(this, name, id, result, IsValidateArguments, IsVariantArgumentList, argumentCount, a1, a2, a3);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_DATA_FUNCTION__CCTOR_OFFSET))();
		}
	};
}
