#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_XML_BITSTACK_PEEKBIT_OFFSET UNITYSDK_OFFSET(0x1E7CA840)
#define SYSTEM_XML_BITSTACK_POPBIT_OFFSET UNITYSDK_OFFSET(0x1E7CA7B0)
#define SYSTEM_XML_BITSTACK_POPCURR_OFFSET UNITYSDK_OFFSET(0x1E7CA800)
#define SYSTEM_XML_BITSTACK_PUSHBIT_OFFSET UNITYSDK_OFFSET(0x1E7CA6E0)
#define SYSTEM_XML_BITSTACK_PUSHCURR_OFFSET UNITYSDK_OFFSET(0x1E7CA710)
#define SYSTEM_XML_BITSTACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7CA6D0)

namespace System::Xml
{
	inline static constexpr unsigned int BitStack_TypeDefinitionIndex = 1792;

	class BitStack : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* bitStack; // 0x10
		::System::UInt32 curr; // 0x18
		::System::Int32 stackPos; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_BITSTACK__CTOR_OFFSET))(this);
		}

		::System::Void PushBit(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_BITSTACK_PUSHBIT_OFFSET))(this, a1);
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
