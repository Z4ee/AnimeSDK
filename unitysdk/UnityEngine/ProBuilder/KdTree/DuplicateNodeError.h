#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

#define UNITYENGINE_PROBUILDER_KDTREE_DUPLICATENODEERROR__CTOR_OFFSET UNITYSDK_OFFSET(0x1EABF230)

namespace UnityEngine::ProBuilder::KdTree
{
	inline static constexpr unsigned int DuplicateNodeError_TypeDefinitionIndex = 37424;

	class DuplicateNodeError : public ::System::Exception
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_KDTREE_DUPLICATENODEERROR__CTOR_OFFSET))(this);
		}
	};
}
