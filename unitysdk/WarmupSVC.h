#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class WarmupShaderVariant;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define WARMUPSVC__CTOR_OFFSET UNITYSDK_OFFSET(0xE9ECE30)

inline static constexpr unsigned int WarmupSVC_TypeDefinitionIndex = 47431;

class WarmupSVC : public ::System::Object
{
public:
	::System::Int32 ShaderCount; // 0x10
	::System::Int32 VariantCount; // 0x14
	::System::Collections::Generic::List_1<::WarmupShaderVariant*>* ShaderVariants; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WARMUPSVC__CTOR_OFFSET))(this);
	}
};
