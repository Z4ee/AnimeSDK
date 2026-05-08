#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_IO_TEXTREADER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19ECD320)
#define SYSTEM_IO_TEXTREADER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19ECD360)
#define SYSTEM_IO_TEXTREADER___C___CCTOR_B__22_0_OFFSET UNITYSDK_OFFSET(0x19ECD370)
#define SYSTEM_IO_TEXTREADER___C___CCTOR_B__22_1_OFFSET UNITYSDK_OFFSET(0x19ECD3F0)

namespace System::IO
{
	inline static constexpr unsigned int TextReader___c_TypeDefinitionIndex = 666;

	class TextReader___c : public ::System::Object
	{
	public:
		static ::System::IO::TextReader___c** StaticGet___9()
		{
			return (::System::IO::TextReader___c**)Il2CppClass::FromTypeDefinitionIndex(TextReader___c_TypeDefinitionIndex)->GetStaticField(0x170);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTREADER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTREADER___C__CTOR_OFFSET))(this);
		}

		::System::String* __cctor_b__22_0(::System::Object* state)
		{
			return ((::System::String*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTREADER___C___CCTOR_B__22_0_OFFSET))(this, state);
		}

		::System::Int32 __cctor_b__22_1(::System::Object* state)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_IO_TEXTREADER___C___CCTOR_B__22_1_OFFSET))(this, state);
		}
	};
}
