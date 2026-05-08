#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Data/BinaryNode.h"
#include "unitysdk/System/Data/DataRowVersion.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Data { class DataRow; }
namespace System::Data { class DataTable; }
namespace System::Data { class ExpressionNode; }

#define SYSTEM_DATA_LIKENODE_ANALYZEPATTERN_OFFSET UNITYSDK_OFFSET(0x1B5034F0)
#define SYSTEM_DATA_LIKENODE_EVAL_OFFSET UNITYSDK_OFFSET(0x1B502D90)
#define SYSTEM_DATA_LIKENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B501F20)

namespace System::Data
{
	inline static constexpr unsigned int LikeNode_TypeDefinitionIndex = 37013;

	class LikeNode : public ::System::Data::BinaryNode
	{
	public:
		::System::String* _pattern; // 0x30
		::System::Int32 _kind; // 0x38

		::System::Void _ctor(::System::Data::DataTable* table, ::System::Int32 op, ::System::Data::ExpressionNode* left, ::System::Data::ExpressionNode* right)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataTable*, ::System::Int32, ::System::Data::ExpressionNode*, ::System::Data::ExpressionNode*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_LIKENODE__CTOR_OFFSET))(this, table, op, left, right);
		}

		::System::Object* Eval(::System::Data::DataRow* row, ::System::Data::DataRowVersion version)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Data::DataRow*, ::System::Data::DataRowVersion))((::PBYTE)hIl2Cpp + SYSTEM_DATA_LIKENODE_EVAL_OFFSET))(this, row, version);
		}

		::System::String* AnalyzePattern(::System::String* pat)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_LIKENODE_ANALYZEPATTERN_OFFSET))(this, pat);
		}
	};
}
