#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_XML_BITSTACK_PEEKBIT_OFFSET UNITYSDK_OFFSET(0x18563010)
#define SYSTEM_XML_BITSTACK_POPBIT_OFFSET UNITYSDK_OFFSET(0x18562F60)
#define SYSTEM_XML_BITSTACK_POPCURR_OFFSET UNITYSDK_OFFSET(0x18562FC0)
#define SYSTEM_XML_BITSTACK_PUSHBIT_OFFSET UNITYSDK_OFFSET(0x18562E80)
#define SYSTEM_XML_BITSTACK_PUSHCURR_OFFSET UNITYSDK_OFFSET(0x18562EB0)
#define SYSTEM_XML_BITSTACK__CTOR_OFFSET UNITYSDK_OFFSET(0x18562E70)

namespace System::Xml
{
	inline static constexpr unsigned int BitStack_TypeDefinitionIndex = 1780;

	class BitStack : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* bitStack; // 0x10
		::System::Int32 stackPos; // 0x18
		::System::UInt32 curr; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_BITSTACK__CTOR_OFFSET))(this);
		}

		::System::Void PushBit(::System::Boolean bit)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_BITSTACK_PUSHBIT_OFFSET))(this, bit);
		}

		::System::Boolean PopBit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_BITSTACK_POPBIT_OFFSET))(this);
		}

		::System::Boolean PeekBit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_BITSTACK_PEEKBIT_OFFSET))(this);
		}

		::System::Void PushCurr()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_BITSTACK_PUSHCURR_OFFSET))(this);
		}

		::System::Void PopCurr()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_BITSTACK_POPCURR_OFFSET))(this);
		}
	};
}
