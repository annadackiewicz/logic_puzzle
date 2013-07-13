#ifndef _LOGIC_PUZZLE_FIELD_HPP_
#define _LOGIC_PUZZLE_FIELD_HPP_

class Field {
 public:
  // Constructor of the field which sets it for undecided.
  Field();
  // Constructor of the field with given state.
  // If the _state is not correct, then set to undecided.
  Field(short _state);
  ~Field();

  // Gives information if the field has alread been decided.
  bool isSet();
  // Sets the field to 'stay empty' state.
  bool setEmpty();
  // Sets the field to 'stay filled' state.
  bool setFilled();
  // Set the field to undecided.
  void reset();

  // Returns the state of the field.
  short getState();
 
 private:
  // State of the field:
  //  0  if hasn't been yet set, undecided state,
  //  1  if has to stay empty, one of the decided states.
  //  2  if has to stay filled, one of the decided states.
  short state;

 friend class Field_test;
};

#endif  // _LOGIC_PUZZLE_FIELD_HPP_
