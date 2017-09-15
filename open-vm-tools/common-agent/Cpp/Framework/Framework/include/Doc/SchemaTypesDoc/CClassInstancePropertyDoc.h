/*
 *  Author: bwilliams
 *  Created: April 6, 2012
 *
 *  Copyright (c) 2012 Vmware, Inc.  All rights reserved.
 *  -- VMware Confidential
 *
 *  This code was generated by the script "build/dev/codeGen/genCppDoc". Please
 *  speak to Brian W. before modifying it by hand.
 *
 */

#ifndef CClassInstancePropertyDoc_h_
#define CClassInstancePropertyDoc_h_

namespace Caf {

/// Definition of an attribute (field) of a class
class CClassInstancePropertyDoc {
public:
	CClassInstancePropertyDoc() :
		_required(false),
		_transientVal(false),
		_list(false),
		_isInitialized(false) {}
	virtual ~CClassInstancePropertyDoc() {}

public:
	/// Initializes the object with everything required by this
	/// container. Once initialized, this object cannot
	/// be changed (i.e. it is immutable).
	void initialize(
		const std::string name,
		const std::deque<SmartPtrCClassIdentifierDoc> type,
		const bool required = false,
		const bool transientVal = false,
		const bool list = false,
		const std::string displayName = std::string(),
		const std::string description = std::string()) {
		if (! _isInitialized) {
			_name = name;
			_type = type;
			_required = required;
			_transientVal = transientVal;
			_list = list;
			_displayName = displayName;
			_description = description;

			_isInitialized = true;
		}
	}

public:
	/// Property name
	std::string getName() const {
		return _name;
	}

	/// Accessor for the Type
	std::deque<SmartPtrCClassIdentifierDoc> getType() const {
		return _type;
	}

	/// Whether this is a required property, i.e. this property must always be non-empty
	bool getRequired() const {
		return _required;
	}

	/// Accessor for the TransientVal
	bool getTransientVal() const {
		return _transientVal;
	}

	/// Indicates whether to expect a list of properties in the provider response
	bool getList() const {
		return _list;
	}

	/// A hint as to what this property should be called when displaying it to a human
	std::string getDisplayName() const {
		return _displayName;
	}

	/// A phrase to describe the property for mouse-over text, etc
	std::string getDescription() const {
		return _description;
	}

private:
	std::string _name;
	std::deque<SmartPtrCClassIdentifierDoc> _type;
	bool _required;
	bool _transientVal;
	bool _list;
	std::string _displayName;
	std::string _description;
	bool _isInitialized;

private:
	CAF_CM_DECLARE_NOCOPY(CClassInstancePropertyDoc);
};

CAF_DECLARE_SMART_POINTER(CClassInstancePropertyDoc);

}

#endif