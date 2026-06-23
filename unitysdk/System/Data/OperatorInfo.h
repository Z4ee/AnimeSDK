#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Data/Nodes.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_DATA_OPERATORINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1E182F70)

namespace System::Data
{
	inline static constexpr unsigned int OperatorInfo_TypeDefinitionIndex = 38639;

	class OperatorInfo : public ::System::Object
	{
	public:
		::System::Int32 _op; // 0x10
		::System::Data::Nodes _type; // 0x14
		::System::Int32 _priority; // 0x18

		::System::Void _ctor(::System::Data::Nodes type, ::System::Int32 op, ::System::Int32 pri)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::Nodes, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_OPERATORINFO__CTOR_OFFSET))(this, type, op, pri);
		}
	};
}
